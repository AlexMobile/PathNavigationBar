//
//  PathNavigationBarCell.h
//  PathNavigationBarDemo
//
//  Created by Alexey Golovenkov on 07.06.13.
//  Copyright (c) 2013 Alexey Golovenkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PathNavigationBarCell : UIControl

@property (nonatomic, strong) IBOutlet UIImageView* iconView;
@property (nonatomic, strong) IBOutlet UILabel* titleLabel;

/// Minimum width of the cell if all cells can not be shown at once. If value of this property is equal to 0 (default), cell does not change it's size
@property (nonatomic, assign) CGFloat minWidth;

/// Maximum width of the cell. If value of this property is zero, width is get calculated using cell's content
@property (nonatomic, assign) CGFloat maxWidth;

@end
