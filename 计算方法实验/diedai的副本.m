function x = diedai(f,diedaif,x0,e)

N = 10; %����������

ret = feval(diedaif,x0);
xk = x0;
k = 0;

while abs(x0-ret)>e & k<N
    
    xk = feval(diedaif,xk);
    ret = feval(diedaif,xk);
    
    k = k+1;
    fprintf("xk=%f\n", xk);
    %if
    %    break;
    %end
    
end

if k==N
    fprintf('������������������\n');

end

