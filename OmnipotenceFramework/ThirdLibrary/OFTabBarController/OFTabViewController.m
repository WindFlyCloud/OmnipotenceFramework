//
//  OFTabViewController.m
//  OmnipotenceFramework
//
//  Created by caoxu on 16/7/2.
//  Copyright © 2016年 WindFlyCloud. All rights reserved.
//

#import "OFTabViewController.h"
//导航栏
#import "OFNavViewController.h"
//更多
#import "MoreViewController.h"
//收银
#import "CashierViewController.h"
//对账
#import "CheckingViewController.h"

@interface OFTabViewController ()

@end

@implementation OFTabViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self createCustomTabBarView];
}
- (void)createCustomTabBarView {
    CheckingViewController * checkingVC = [[CheckingViewController alloc]init];
    OFNavViewController * checkingNav = [[OFNavViewController alloc]initWithRootViewController:checkingVC];
    checkingNav.tabBarItem.image = [UIImage imageNamed:@"tabbar_icon_details_n"];
    checkingNav.tabBarItem.selectedImage = [UIImage imageNamed:@"tabbar_icon_details_s"];
    checkingNav.title = @"对账";
    
    CashierViewController * cashierVC = [[CashierViewController alloc]init];
    OFNavViewController * cashierNav = [[OFNavViewController alloc]initWithRootViewController:cashierVC];
    cashierNav.tabBarItem.image = [UIImage imageNamed:@"tabbar_icon_gathering_n"];
    cashierNav.tabBarItem.selectedImage = [UIImage imageNamed:@"tabbar_icon_gathering_s"];
    cashierNav.title = @"收银";
    
    
    MoreViewController * moreVC = [[MoreViewController alloc]init];
    OFNavViewController * moreNav = [[OFNavViewController alloc]initWithRootViewController:moreVC];
    moreNav.tabBarItem.image = [UIImage imageNamed:@"tabbar_icon_more_n"];
    moreNav.tabBarItem.selectedImage = [UIImage imageNamed:@"tabbar_icon_more_s"];
    moreNav.title = @"更多";
    
    self.tabBar.tintColor = RGB(209, 62, 80);
    self.viewControllers = @[checkingNav,cashierNav,moreNav];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
