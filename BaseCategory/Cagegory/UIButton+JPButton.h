//
//  UIButton+JPButton.h
//  BaseCategory
//
//  Created by zhongqing on 2018/12/22.
//  Copyright © 2018年 JPBaseCategory. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, JPButtonEdgeInsetsStyle) {
    JPButtonEdgeInsetsStyleTop, // image在上，label在下
    JPButtonEdgeInsetsStyleLeft, // image在左，label在右
    JPButtonEdgeInsetsStyleBottom, // image在下，label在上
    JPButtonEdgeInsetsStyleRight // image在右，label在左
};

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (JPButton)

/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(JPButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;

@end

NS_ASSUME_NONNULL_END
