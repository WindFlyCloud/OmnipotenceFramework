//
//  Screen_header.h
//  OmnipotenceFramework
//
//  Created by caoxu on 16/7/2.
//  Copyright © 2016年 WindFlyCloud. All rights reserved.
//

#ifndef Screen_header_h
#define Screen_header_h
//服务器



//网络请求标识
//短信
#define SMS_MARK @"SMS_MARK"
//注册
#define REGISTER_MARK @"REGISTER_MARK"
//登录
#define LOGIN_MARK @"LOGIN_MARK"
//邀请人
#define INVITER_MARK @"INVITER_MARK"
//公司信息上传
#define COMPANYINFO_MARK @"COMPANYINFO_MARK"
//营业信息
#define TRADEINSERT_MARK @"TRADEINSERT_MARK"
//商业信息
#define BUSINESS_MARK @"BUSINESS_MARK"
//上传图片
#define UPLOADPIC_MARK @"UPLOADPIC_MARK"
//交易流水
#define DETAIL_MARK @"DETAIL_MARK"
//退款
#define REFUND_MARK @"REFUND_MARK"
//交易
#define ACCOUNT_MARK @"ACCOUNT_MARK"
//支付宝上传信息
#define BINDINGALIPAY_MARK @"BINDINGALIPAY_MARK"
//查询渠道状态
#define CHECKINFO_MARK @"CHECKINFO_MARK"
//检查版本个更新
#define CHECKVERSION_MARK @"CHECKVERSION_MARK"

//服务器返回值
#define RET_CODE @"ret_code"
#define RET_MEG  @"ret_msg"
//加密秘钥
#define DESKEY @"cloudskycloudskycloudskycloudsky"
#define TOKEN @"1qazqazwpc7ryfnx97sjamxldnvbr631"


/**
 *  切换时间格式(把日期和时间和起来)
 *
 *  @param transDate 日期
 *  @param transTime 时间
 */
#define SETTIMESTAYE(transDate,transTime)\
NSString *dateStr = [NSString stringWithFormat:@"%@%@",transDate,transTime];\
NSDate *date = [[NSDate alloc]init];\
NSDateFormatter* df=[[NSDateFormatter alloc]init];\
df.dateFormat=@"yyyyMMddHHmmss";\
date = [df dateFromString:dateStr];\
df.dateFormat = @"yyyy-MM-dd  HH:mm";\
NSString *strDate = [df stringFromDate:date]


//重写NSLog
#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__,  ##__VA_ARGS__);
#else
#   define DLog(...)

#endif
// 获取RGB颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)

//获取屏幕 宽度、高度
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//信息
#define CLOUDSSKY @"Cloudssky.cn"

//Alert
#define ALERT(msg) [[UIAlertView alloc] initWithTitle:nil message:msg delegate:nil cancelButtonTitle:@"好" otherButtonTitles:nil]
#define ALERTBUTTON(msg,button) [[UIAlertView alloc] initWithTitle:nil message:msg delegate:self cancelButtonTitle:@"取消" otherButtonTitles:button, nil]
#define ALERTTITLE(title,msg) [[UIAlertView alloc] initWithTitle:title message:msg delegate:nil cancelButtonTitle:@"好" otherButtonTitles:nil]
#define ALERTTTBUTTON(title,msg,button) [[UIAlertView alloc] initWithTitle:title message:msg delegate:self cancelButtonTitle:@"取消" otherButtonTitles:button]

#define SHOWALERT(msg) [[[UIAlertView alloc] initWithTitle:nil message:msg delegate:nil cancelButtonTitle:@"好" otherButtonTitles:nil] show]
#define SHOWALERTBUTTON(msg,button) [[[UIAlertView alloc] initWithTitle:nil message:msg delegate:self cancelButtonTitle:@"取消" otherButtonTitles:button, nil] show]
#define SHOWALERTTITLE(title,msg) [[[UIAlertView alloc] initWithTitle:title message:msg delegate:nil cancelButtonTitle:@"好" otherButtonTitles:nil] show]
#define SHOWALERTTTBUTTON(title,msg,button) [[[UIAlertView alloc] initWithTitle:title message:msg delegate:self cancelButtonTitle:@"取消" otherButtonTitles:button] show]

// 是否隐藏tabbar，navigaction
#define HIDDENNAV(state) self.navigationController.navigationBar.hidden = state
#define HIDDENTAB(state) self.tabBarController.tabBar.hidden = state

//禁止旋转
#define SHOULDAutorotate(staye)\
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation\
{\
return (toInterfaceOrientation == UIInterfaceOrientationPortrait);\
}\
- (BOOL)shouldAutorotate\
{\
return staye;\
}\
- (UIInterfaceOrientationMask)supportedInterfaceOrientations\
{\
return UIInterfaceOrientationMaskPortrait;\
}
//tableView 的颜色
#define tableVColor RGB(234,234,234)
/*高度占行的比率*/
#define rratio 205/720

//页面颜色定义
#define BGColor [UIColor getColor:@"efeff4"] // 背景颜色
#define DHLcolor [UIColor getColor:@"22292c"] // DHL导航栏
#define BQLcolor [UIColor getColor:@"ffffff"] // BQL标签栏
#define NRQYcolor [UIColor getColor:@"fffbe8"]// NRQY内容区域背景色
#define ZYWZAcolor [UIColor getColor:@"000000"] //重要文字颜色
#define ZYWZBcolor [UIColor getColor:@"ff6651"]//重要文字颜色
#define ZYWZCcolor [UIColor getColor:@"7fbfa2"]//重要文字颜色
#define ZYWZDcolor [UIColor getColor:@"ffbb51"]//重要文字颜色
#define YBWZcolor [UIColor getColor:@"999999"] //一般文字颜色
#define JRWZcolor  [UIColor getColor:@"d2d0d1"] //较弱文字颜色
#define MKBKcolor  [UIColor getColor:@"f7ecc1"] //主分割模块边框颜色
#define FGXcolor   [UIColor getColor:@"dbdbdb"] //分割线颜色
//字体大小
#define ZY40PX [UIFont systemFontOfSize:20];//用于少数重要的标题
#define ZY34PX [UIFont systemFontOfSize:17];//用于一些较为重要的文字操作按钮
#define YB28PX [UIFont systemFontOfSize:14];//用于大多数文字
#define YB26PX [UIFont systemFontOfSize:13];//用于大多数文字
#define R24PX [UIFont systemFontOfSize:12];//用于辅助性文字次要的副标题
#define R22PX [UIFont systemFontOfSize:11];//用于辅助性文字次要的备注信息
//边距
#define BJ32PX 16
#endif /* Screen_header_h */
