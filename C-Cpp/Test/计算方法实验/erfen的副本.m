function x = erfen(f,a,b,e)
% f�Ǻ����� a,b������˵㣬eΪ����
fa = feval(f,a); % feval������ֵ
fb = feval(f,b);
if fa*fb>0
    error('�˺�����[%d,%d]�����޽�',a,b);
end

k = 0;
x = (a+b)/2;
while(b-a)>(2*e)
    fx=feval(f,x);
    if fa*fx<0
        b=x;
        fb=fx;
    else
        a=x;
        fb=fx;
    end
    k=k+1;
    x=(a+b)/2;
    
    fprintf("%d:x=%f\n", k, x);
    
end

