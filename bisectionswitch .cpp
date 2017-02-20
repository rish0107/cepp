    #include<iostream>
    #include<math.h>
    using namespace std;

    float fn(float x)
    {
        float tmp=(x*log10(x))-1.2;
        return(tmp);
    }
    int main()
    {
        int ch,i;
         float x1,x2,x3,temp;
        do
        {

            cout<<"\n\nmenu"<<endl;
            cout<<"1-enter two approx value"<<endl;
            cout<<"2-one approx value"<<endl;
            cout<<"3-no approx value"<<endl;
            cout<<"4-enter two approx value and show iterations"<<endl;
            cout<<"5-one approx value and show iterations"<<endl;
            cout<<"6-no approx value and show iterations"<<endl;
            cout<<"7-exit"<<endl;
            cout<<"enter choice number"<<endl;
            cin>>ch;
            switch(ch){
        case 1:
            cout<<"enter two approx value"<<endl;
            cin>>x1>>x2;
            if((fn(x1)*fn(x2))>0)
            {
                cout<<"wrong values";
            }
            else
            {
                while(((x1-x2)>0.00001)||(x2-x1)>.00001)
                {
                    x3=(x1+x2)/2;
                    temp=fn(x3);
                    if(temp<0)
                        x1=x3;
                    else
                        x2=x3;
                }
            }
            cout<<"\nroots is: "<<x3;
            break;
        case 2:
            cout<<"enter one approx value"<<endl;
            cin>>x1;
            for(int i=x1;i<10;i++)
            {
                if((fn(x1)*fn(i))<0)
                {
                    x2=i;
                    break;
                }
            }
            while(((x1-x2)>0.00001)||(x2-x1)>.00001)
            {
                x3=(x1+x2)/2;
                temp=fn(x3);
                if(temp<0)
                    x1=x3;
                else
                    x2=x3;
            }
            cout<<"\nroots is: "<<x3;
            break;
        case 3:
             int i;
            for(i=1;i<10;i++)
            {
                while((fn(i)*fn(i+1))<0)
                {
                    x1=i;
                    x2=i+1;
                    break;
                }
            }
            if(fn(x1)*fn(x2)>0)
            {
                cout<<"wrong value";
            }
            else
            {
                while(((x1-x2)>0.00001)||(x2-x1)>.00001)
                {
                    x3=(x1+x2)/2;
                    temp=fn(x3);
                    if(temp<0)
                        x1=x3;
                    else
                        x2=x3;
                }
                cout<<"\nroots is: "<<x3<<endl;
                break;
            }
        case 4:
            cout<<"enter two approx value"<<endl;
            cin>>x1>>x2;
            if((fn(x1)*fn(x2))>0)
            {
                cout<<"wrong values";
            }
            else
            {
                cout<<"x"<<"\t\t"<<"f(x)"<<endl;
                while(((x1-x2)>0.00001)||(x2-x1)>.00001)
                {
                    x3=(x1+x2)/2;
                    temp=fn(x3);
                    cout<<x3<<"\t\t"<<temp<<endl;
                    if(temp<0)
                        x1=x3;
                    else
                        x2=x3;
                }
            }
            cout<<"\nroots is: "<<x3;
            break;
        case 5:
            cout<<"enter one approx value"<<endl;
            cin>>x1;
            for(int i=x1;i<10;i++)
            {
                if((fn(x1)*fn(i))<0)
                {
                    x2=i;
                    break;
                }
            }
            cout<<"x"<<"\t\t"<<"f(x)"<<endl;
            while(((x1-x2)>0.00001)||(x2-x1)>.00001)
            {
                x3=(x1+x2)/2;
                temp=fn(x3);
                cout<<x3<<"\t\t"<<temp<<endl;
                if(temp<0)
                    x1=x3;
                else
                    x2=x3;
            }
            cout<<"\nroots is: "<<x3;
            break;
        case 6:
            for(i=1;i<10;i++)
            {
                while((fn(i)*fn(i+1))<0)
                {
                    x1=i;
                    x2=i+1;
                    break;
                }
            }
            if(fn(x1)*fn(x2)>0)
            {
                cout<<"wrong value";
            }
            else
            {
                cout<<"x"<<"\t\t"<<"f(x)"<<endl;
                while(((x1-x2)>0.00001)||(x2-x1)>.00001)
                {
                    x3=(x1+x2)/2;
                    temp=fn(x3);
                    cout<<x3<<"\t\t"<<temp<<endl;
                    if(temp<0)
                        x1=x3;
                    else
                        x2=x3;
                }
                cout<<"\nroots is: "<<x3<<endl;
                break;
            }
        }
    }while(ch<7);
    return 0;
}
