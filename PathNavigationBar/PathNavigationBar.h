//
//  PathNavigationBar.h
//  PathNavigationBarDemo
//
//  Created by Alexey Golovenkov on 07.06.13.
//  Copyright (c) 2013 Alexey Golovenkov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PathNavigationBarDelegate.h"

@interface PathNavigationBar : UIView

@property (nonatomic, weak) id<PathNavigationBarDelegate> delegate;

- (void)addItem:(PathNavigationBarItem*)item animated:(BOOL)animated;
- (void)addItemsFromArray:(NSArray*)items animated:(BOOL)animated;
- (void)insertItem:(PathNavigationBarItem*)item atIndex:(NSUInteger)index;
- (void)removeItemAtIndex:(NSUInteger)index animated:(BOOL)animated;
- (void)removeItemsAtIndexes:(NSIndexSet*)indexes animated:(BOOL)animated;
- (void)removeItemsAfterSelectedWithAnimation:(BOOL)animated;
- (void)selectItemWithIndex:(NSUInteger)index;
- (void)removeAllItemsWithAnimation:(BOOL)animated;

@end
