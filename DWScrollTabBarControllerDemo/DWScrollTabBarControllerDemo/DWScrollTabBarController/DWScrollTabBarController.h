//
//  DWScrollTabBarController.h
//  DWScrollTabBarControllerDemo
//
//  Created by jiadawei on 06/04/2017.
//  Copyright © 2017 david. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DWScrollTabBar.h"

@interface DWScrollTabBarController : UIViewController <DWScrollTabBarDelegate, UIScrollViewDelegate>

/**顶部tabBar*/
@property (nonatomic, strong) DWScrollTabBar                        *scrollTabBar;
/**主视图-存放各个列表*/
@property (nonatomic, strong) UIScrollView                          *scrollView;
/**分类对象数组*/
@property (nonatomic, strong) NSArray                               *typesArray;
/**列表数组*/
@property (nonatomic, strong) NSMutableArray                        *tableViewArray;
/**当前页索引*/
@property (nonatomic, assign) NSInteger                             currentPage;
/**正常字体（默认不加粗14）*/
@property (nonatomic, assign) UIFont                                *normalFont;
/**选中字体（默认同正常字体一样）*/
@property (nonatomic, assign) UIFont                                *currentFont;
/**按钮标题字体颜色 - 未选中，默认黑色*/
@property (nonatomic, strong) UIColor                               *normalColor;
/**按钮标题字体颜色 - 选中，默认橙色*/
@property (nonatomic, strong) UIColor                               *currentColor;
/**按钮背景颜色 - 未选中，默认白色*/
@property (nonatomic, strong) UIColor                               *normalBgColor;
/**按钮背景颜色 - 选中，默认白色*/
@property (nonatomic, strong) UIColor                               *currentBgColor;
/**tabBar背景颜色(默认白色)*/
@property (nonatomic, strong) UIColor                               *tabBarBgColor;
/**tabBar高度（同按钮的高度一样，默认40）*/
@property (nonatomic, assign) CGFloat                               tabBarHeight;
/**tabBar与列表间距（默认0）*/
@property (nonatomic, assign) CGFloat                               viewMargin;
/**指示线居中(默认不居中)*/
@property (nonatomic, assign, getter=isShowViewMargin) BOOL         showViewMargin;
/**按钮间距（默认0）*/
@property (nonatomic, assign) CGFloat                               buttonMargin;
/**tabBar中左边第一个按钮距tabBar左侧的距离，默认0*/
@property (nonatomic, assign) CGFloat                               leftMargin;
/**tabBar中右边最后一个按钮距tabBar右侧的距离，默认跟leftMargin相同*/
@property (nonatomic, assign) CGFloat                               rightMargin;
/**指示条颜色（默认跟选中时的标题颜色一样）*/
@property (nonatomic, strong) UIColor                               *indicatorLineColor;
/**指示线高度(默认1)*/
@property (nonatomic, assign) CGFloat                               indicatorLineHeight;
/**指示线宽度(默认按钮宽度，如果按钮不是相同宽度的，须谨慎设置，线的宽度不要超过按钮的宽度！)*/
@property (nonatomic, assign) CGFloat                               indicatorLineWidth;
/**指示线居中(默认不居中)*/
@property (nonatomic, assign, getter=isIndicatorLineCenter) BOOL    indicatorLineCenter;
/**是否显示指示线(默认不显示)*/
@property (nonatomic, assign, getter=isShowIndicatorLine) BOOL      showIndicatorLine;
/*底部分割线颜色*/
@property (nonatomic, strong) UIColor                               *bottomLineColor;
/**底部分割线高度(默认1)*/
@property (nonatomic, assign) CGFloat                               bottomLineHeight;
/**是否显示底部分割线(默认不显示)*/
@property (nonatomic, assign, getter=isShowBottomLine) BOOL         showBottomLine;
/**是否所有按钮的宽度都相等，如果此值为YES，需要设置按钮宽度，如果不设置，默认100*/
@property (nonatomic, assign, getter=isUnifiedWidth) CGFloat        unifiedWidth;
/**按钮宽度，如果未设置unifiedWidth为YES，则设置了也不起作用，默认100*/
@property (nonatomic, assign) CGFloat                               buttonWidth;
/**是否有弹簧效果（默认无）*/
@property (nonatomic, assign, getter=isBounces) CGFloat             bounces;
/**tabBar是否可以滚动（默认可以滚动）*/
@property (nonatomic, assign, getter=isScrollable) CGFloat          scrollable;

/**
 * 根据索引点击tabBarButton上的按钮
 */
- (void)clickButtonAtIndex:(NSInteger)index;

@end
