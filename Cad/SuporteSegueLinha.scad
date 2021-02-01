
union(){
difference(){
    hull(){
        cylinder(4,d=10,$fn=100);
        translate([0,50,0])cylinder(4,d=10,$fn=100);
    }
    //cube([10,50,4]);
translate([0,38,-1])cylinder(6,d=4,$fn=100);
translate([0,44,-1])cylinder(6,d=4,$fn=100);
}
color("red")translate([0,-2,-6])
cylinder(10,d=10,center=false,$fn=100);//cube([10,8,14],center=false);
}
