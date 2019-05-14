//
//  PTMoreMenuView.h
//  PTMoreMenuView
//
//  Created by 纵昂 on 2019/5/14.
//  Copyright © 2019 GitHub:https://github.com/ZongAng123. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PTMoreMenuView : UIView
/**
 从底部显示更多操作模式的按钮视图
 
 @param titleArray 标题名称
 @param imgNameArray 图片名称
 @param blockTapAction 点击返回事件(返回顺序:左->右,上->下, 0,1,2,3...)
 */
+ (void)showMoreWithTitle:(NSArray *)titleArray
             imgNameArray:(NSArray *)imgNameArray
           blockTapAction:( void(^)(NSInteger index) )blockTapAction;

@end

NS_ASSUME_NONNULL_END
