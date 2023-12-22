#include <math.h>

char robot_move(int xs[], int ys[], int num_points, int area_radius, int xt, int yt){
    for (int i = 1 ; i < num_points; i ++ ){
        int u = 1, y = 1;
        if(xs[i] < xs[i - 1])
        u = -1 ;
        if(ys[i] < ys[i - 1])
        y = -1 ;
        for (int j = xs[i - 1]; j <= xs[i]; j += u){
            for (int h = ys[i - 1]; h <= ys[i]; h += y){
                for ( float p = 0 ; p <= area_radius + 0.1; p += 0.1 ){
                    // printf("%d %d %lf %d %d\n", j, h , p, xt, yt );
                    if ( j + p == xt && h == yt)
                    return 1 ;
                    if ( j - p == xt && h == yt)
                    return 1 ;
                    if ( j == xt && h + p == yt)
                    return 1 ;
                    if ( j == xt && h - p == yt)
                    return 1 ;
                }
            }
        }
    }
    return 0 ;

    // float xx = xt;
    // float yy = yt;
    // for (int i = 0 ; i < num_points - 1; i ++ ){
    //     for (int k = i + 1 ; k < num_points; k ++ ){
    //         int u = 1, y = 1;
    //         if(xs[k] < xs[i])
    //         u = -1 ;
    //         if(xs[k] == xs[i])
    //         u = 0;
    //         if(ys[k] < ys[i])
    //         y = -1 ;
    //         if(ys[k] == ys[i])
    //         y = 0;
    //         int a = xs[i], b = xs[k];
    //         int h = ys[i];
    //         if (u == 0){
    //             a = ys[i];
    //             b = ys[k];
    //         }
    //         if(y == 0){
    //             a = xs[i];
    //             b = xs[k];
    //         }
    //         for (int j = a; j <= b; j += u){
    //             printf("%d\n", xs[k]  );
    //             for ( float p = 0 ; p <= area_radius + 0.1; p += 0.1 ){
    //                 printf("%lf %lf %lf %lf %lf\n", j + p, h , p, xx, yy );
    //                 if ( j + p == xx && h == yy)
    //                 return 1 ;
    //                 printf("%lf %lf %lf %lf %lf\n", j - p, h , p, xx, yy );
    //                 if ( j - p == xx && h == yy)
    //                 return 1 ;
    //                 printf("%lf %lf %lf %lf %lf\n", j, h + p , p, xx, yy );
    //                 if ( j == xx && h + p == yy)
    //                 return 1 ;
    //                 printf("%lf %lf %lf %lf %lf\n", j, h - p, p, xx, yy );
    //                 if ( j == xx && h - p == yy)
    //                 return 1 ;
                    
    //             }
    //             h += y;
    //         }
    //     }
    // }
    // return 0 ;
}