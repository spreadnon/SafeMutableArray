//
//  ViewController.m
//  SafeMutableArray
//
//  Created by iOS123 on 2019/12/4.
//  Copyright © 2019 CQL. All rights reserved.
//

#import "ViewController.h"
#import "SafeMutableArray.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    SafeMutableArray *array = [[SafeMutableArray alloc]init];
    [array addObject:@"1"];
    NSLog(@"%lu",(unsigned long)array.count);
}


@end
