//
//  PathNavigationBarDelegate.h
//  PathNavigationBarDemo
//
//  Created by Alexey Golovenkov on 07.06.13.
//  Copyright (c) 2013 Alexey Golovenkov. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PathNavigationBar;
@class PathNavigationBarItem;
@class PathNavigationBarCell;

@protocol PathNavigationBarDelegate <NSObject>

- (void)bar:(PathNavigationBar*)bar didSelectItem:(PathNavigationBarItem*)item;
- (void)bar:(PathNavigationBar*)bar didAddItem:(PathNavigationBarItem*)item;
- (void)bar:(PathNavigationBar*)bar didRemoveItem:(PathNavigationBarItem*)item;

- (void)bar:(PathNavigationBar*)bar customizeCell:(PathNavigationBarCell*)cell withItem:(PathNavigationBarItem*)item;

@end
