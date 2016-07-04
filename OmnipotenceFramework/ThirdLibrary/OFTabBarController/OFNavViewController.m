//
//  OFNavViewController.m
//  OmnipotenceFramework
//
//  Created by caoxu on 16/7/2.
//  Copyright © 2016年 WindFlyCloud. All rights reserved.
//

#import "OFNavViewController.h"

#import "UIBarButtonItem+Extension.h"
@interface OFNavViewController ()

@end

@implementation OFNavViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self setupNav];
}
/**
 *  能拦截所有push进来的字控制器
 *
 */
- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated
{
    if (self.viewControllers.count > 0 ) {// 如果现在push的不是栈底控制器(最先push进来的那个控制器)
        
        //设置导航栏
        viewController.navigationItem.leftBarButtonItem = [UIBarButtonItem itemWithImageName:@"icon_back" highImageName:@"icon_back" target:self action:@selector(back)];
        viewController.hidesBottomBarWhenPushed = YES;
    }
    [super pushViewController:viewController animated:animated];
}

- (void)back
{
    //#warning 这里用的是self, 因为self就是当前正在使用的导航控制器
    [self popViewControllerAnimated:YES];
}

-(void)setupNav
{
    NSMutableDictionary *attribDict = [NSMutableDictionary dictionary];
    attribDict[NSForegroundColorAttributeName] = [UIColor whiteColor];
    [self.navigationBar setTitleTextAttributes:attribDict];
    //    [self.navigationBar setBackgroundImage:[UIImage imageNamed:@"discovery_bg_highlighted"] forBarMetrics:UIBarMetricsDefault];
    //    self.navigationBar.barTintColor = RGB(18, 143, 228);
    
    self.navigationBar.barTintColor = DHLcolor;
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
