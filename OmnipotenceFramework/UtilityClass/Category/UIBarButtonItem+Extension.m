//
//  UIBarButtonItem+Extension.m
//  OmnipotenceFramework
//
//  Created by caoxu on 16/7/2.
//  Copyright © 2016年 WindFlyCloud. All rights reserved.
//

#import "UIBarButtonItem+Extension.h"

@implementation UIBarButtonItem (Extension)
+ (UIBarButtonItem *)itemWithImageName:(NSString *)imageName highImageName:(NSString *)highImageName target:(id)target action:(SEL)action
{
    UIButton *button = [[UIButton alloc] init];
    [button setBackgroundImage:[UIImage imageNamed:imageName] forState:UIControlStateNormal];
    //    [button setBackgroundImage:[UIImage imageNamed:highImageName] forState:UIControlStateHighlighted];
    
    // 设置按钮的尺寸为背景图片的尺寸
    //    CGRect tempRect = button.frame;
    //    tempRect.size = button.currentBackgroundImage.size;
    
    CGRect tempRect = CGRectMake(0, 0, 17, 27);
    
    button.frame = tempRect;
    
    // 监听按钮点击
    [button addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    return [[UIBarButtonItem alloc] initWithCustomView:button];
}

@end
