//
//  ModelController.h
//  ContRxl
//
//  Created by Rachel Rosenbaum on 11/11/15.
//  Copyright © 2015 Rachel Rosenbaum. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

