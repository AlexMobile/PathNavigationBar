//
//  PathNavigationBarItem.h
//  PathNavigationBarDemo
//
//  Created by Alexey Golovenkov on 07.06.13.
//  Copyright (c) 2013 Alexey Golovenkov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PathNavigationBarItem : NSObject

@property (nonatomic, copy) NSString* title;

/// Image to be shoun on cell
@property (nonatomic, strong) UIImage* icon;

/// Image to be shown on the selected cell. If nill, the icon is not changed
@property (nonatomic, strong) UIImage* iconImage;

@end
