
FinalError=99999999; % 990.6948 637.0207 636.0198 360.0795 351.2903            1.0265e5 (dist+vel)   881.4073(TTC)  804.5753   763.1262  734.6724  674.7507 662.6675  2.0449e5(2dist+vel) 1.5359e+05(1.5dist+vel)
Finalii=0; %           10       74       81       82       90                  8                     10             23         30        45        120      150       3                   4
Finaljj=0; %           56       100      100      99       103                 19                    21             30         46        55        120      150       11                  14
Finalkk=0; %           1        1        1        0.2      0.2 (786.3632)      0.2 (1.9852e+03)      0.2            0.2        0.2       0.2       0.2      0.2       0.2 (3.1492e+03)    0.2 (3.0808e+03)
 
%  33552.070  20147.930   18398.973  15836.034  15706.006 (optimized)
%  1          0.2         0.2        0.01       0.01
%  50         100         200        200        112
%  9          20          50         40         20

% 5751.0059  6817.2266
% 0.1        0.1
% 1          0.4
% 50         1000

% 13081.648
% 0.01
% 124
% 18

for ii =0.01:0.01:0.02
    for jj=50:2:200
        for kk=1:1:50
            tic
            R_OBJ_Position=single([ii 0 0]);
            R_OBJ_RelVelocity=single([0 jj 0]);
            R_OBJ_RelAccel=single([0 0 kk]);
            sim('OBJMIL.mdl');
            KalError=abs(KalError);
            KalError1=abs(KalError1);
            ErrorSum=sum(KalError)+1.5*sum(KalError1);            
%             KalError3=abs(KalError3); SimTime=12.6
%             ErrorSum=sum(KalError3);
            if ErrorSum<FinalError
                FinalError=ErrorSum;
                Finalii=ii;
                Finaljj=jj;
                Finalkk=kk;
            end
            clc
            fprintf('ii=%.2f\tjj=%.2f\tkk=%.2f\tFinalii=%.2f\tFinaljj=%.2f\tFinalkk=%.2f\n',ii,jj,kk,Finalii,Finaljj,Finalkk);
%             ii
%             jj
%             kk
%             Finalii
%             Finaljj
%             Finalkk
            toc
        end
    end
end
