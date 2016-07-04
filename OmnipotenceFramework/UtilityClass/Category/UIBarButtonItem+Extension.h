//
//  UIBarButtonItem+Extension.h
//  OmnipotenceFramework
//
//  Created by caoxu on 16/7/2.
//  Copyright © 2016年 WindFlyCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extension)
+ (UIBarButtonItem *)itemWithImageName:(NSString *)imageName highImageName:(NSString *)highImageName target:(id)target action:(SEL)action;
@end
