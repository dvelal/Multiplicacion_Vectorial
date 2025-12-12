#include<iostream>
#include"Vector3.h"
using namespace std;

int main(){
    Vector3 A,B,R;
    int opcion;
    cout << "=== OPERACIONES CON VECTORES 3D ===\n\n";
    cout << "Ingrese el primer vector (x y z): ";
    cin>>A;

    cout << "Ingrese el segundo vector (x y z): ";
    cin>>B;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Suma (A + B)\n";
        cout << "2. Multiplicacion componente a componente (A * B)\n";
        cout << "3. Producto Cruz (A ^ B)\n";
        cout << "4. Volver a ingresar nuevos vectores\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout<<"\n--- SUMA DE VECTORES ---\n";
                cout<<"A = "<<A.x<<"i + "<<A.y<<"j + "<<A.z<<"k\n";
                cout<<"B = "<<B.x<<"i + "<<B.y<<"j + "<<B.z<<"k\n";

                cout<<"Formula:\n";
                cout<<"(A.x + B.x)i + (A.y + B.y)j + (A.z + B.z)k\n";

                R=A + B;

                cout<<"Resultado = "<<R.x<<"i + "<<R.y<<"j + "<<R.z<<"k\n"<<" = "<< "("<<R.x<<","<<R.y<<","<<R.z<<")";
                break;

            case 2:
                cout<<"\n--- MULTIPLICACION COMPONENTE A COMPONENTE ---\n";
                cout<<"A = "<<A.x<<"i + "<<A.y<<"j + "<<A.z<<"k\n";
                cout<<"B = "<<B.x<<"i + "<<B.y<<"j + "<<B.z<<"k\n";

                cout<<"Formula:\n";
                cout<<"(A.x * B.x)i + (A.y * B.y)j + (A.z * B.z)k\n";

                R=A * B;

                cout<<"Resultado = "<<R.x<<"i + "<<R.y<<"j + "<<R.z<<"k\n"<<" = "<< "("<<R.x<<","<<R.y<<","<<R.z<<")";
                break;

            case 3:
                cout<< "\n--- PRODUCTO CRUZ ---\n";
                cout<<"A = "<<A.x<<"i + "<<A.y<<"j + "<<A.z<<"k\n";
                cout<<"B = "<<B.x<<"i + "<<B.y<<"j + "<<B.z<<"k\n";

                cout<<"\nFormula del producto cruz:\n";
                cout<<"u x v = (b1*c2 - c1*b2)i + (c1*a2 - a1*c2)j + (a1*b2 - b1*a2)k\n";

                cout<<"\nSustituyendo:\n";
                cout<<"("<<A.y<<"*"<<B.z<<" - "<<A.z<<"*"<<B.y<<")i + ";
                cout<<"("<<A.z<<"*"<<B.x<<" - "<<A.x<<"*"<<B.z<< ")j + ";
                cout<<"("<<A.x<<"*"<<B.y<<" - "<<A.y<<"*"<<B.x<<")k\n";

                R=A ^ B;

                cout<<"\nResultado = "<<R.x<<"i + "<<R.y<<"j + "<<R.z<< "k\n"<<" = "<< "("<<R.x<<","<<R.y<<","<<R.z<<")";
                dibujito();
                break;

            case 4:
                cout << "\nReingresar valores:\n";
                cout << "Ingrese el vector A (x y z): ";
                cin >> A;
                cout << "Ingrese el vector B (x y z): ";
                cin >> B;
                break;

            case 0:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida.\n";
                break;
        }

    } while (opcion != 0);

    return 0;
}