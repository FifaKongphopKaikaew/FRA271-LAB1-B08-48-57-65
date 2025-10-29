clc;
clear;
cd fisrt_data\
start_file_num = 0;
end_file_num = 20;

num_files = end_file_num - start_file_num + 1;

all_averages = zeros(1, num_files);

for i = start_file_num:end_file_num

    % fill data loop
    filename = sprintf('kg%d.mat', i);
    
    % Check loaded files
    if isfile(filename)
        % loading file into S struct
        S = load(filename);
        
        % mean
        avg_value = mean(S.data.Data);
        % put it in matrix
        array_index = i - start_file_num + 1;
        all_averages(array_index) = avg_value;

        fprintf('File %s, mean = %.4f (kept in index %d)\n', filename, avg_value, i);
    else
        fprintf('!!! File not Found: %s \n', filename);
        all_averages(i) = NaN;
    end
end

incremental_weights = [0, 498, 503, 490, 501, 506, 478, 493, 508, 494, 494, 507, 496, 495, 494, 494, 503, 517, 481, 504, 520];

if length(incremental_weights) ~= num_files
    error('N files is not matches .mat!');
end

% (สมมติว่าตัวแปร incremental_weights และ all_averages มีอยู่แล้ว)

%Cumulative Sum
y_known_weight_g = cumsum(incremental_weights);
%linear equation
x_raw_signal = all_averages;
P = polyfit(x_raw_signal, y_known_weight_g, 1);
m_slope = P(1);
c_offset = P(2);
fprintf('\nCalibration Equation (Actual Weights)\n');
fprintf('Weight = (%.6f * RawSignal) + (%.4f)\n', m_slope, c_offset);
y_fit = (m_slope * x_raw_signal) + c_offset;

% สร้างหน้าต่างกราฟ
figure;

% --- 1. พล็อตจุดข้อมูลจริง (x=สัญญาณ, y=น้ำหนักจริง) ---
plot(x_raw_signal, y_known_weight_g, 'bo', 'MarkerSize', 8, 'DisplayName', 'ข้อมูลวัดจริง X = ADC weight Y = incremnetal weight');
hold on; % <--- เปิด hold on ค้างไว้

% --- 2. พล็อตเส้นที่คำนวณได้ ---
plot(x_raw_signal, y_fit, 'r-', 'LineWidth', 2, 'DisplayName', 'เส้น Calibration (Polyfit)');

for i = 1:length(x_raw_signal)
    
    % ดึงค่า X (ADC) และ Y (Cumulative Weight)
    current_x = x_raw_signal(i);
    current_y = y_known_weight_g(i); 
    
    label = sprintf('X: %.1f\nY: %.0f', current_x, current_y); 
    
    % วาดข้อความลงบนกราฟ
    text(current_x, current_y, label, ...
         'VerticalAlignment', 'bottom', ...  
         'HorizontalAlignment', 'center', ... 
         'FontSize', 8, ...
         'Color', 'blue'); 
end

% --- 4. ตกแต่งกราฟ ---
hold off;
title('Load Cell Calibration Curve (Actual Weights)');
xlabel('Average Raw Signal (ADC Value)'); % <--- แก้ไข Label แกน X
ylabel('Cumulative Weight (grams)');
legend('Location', 'northwest');
grid on;