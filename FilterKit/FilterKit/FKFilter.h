//
//  FKFilter.h
//  FilterKit
//
//  Created by Matt Jarjoura on 7/21/12.
//  Copyright (c) 2012 iOS Dev Camp 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FKFilter <NSObject>
@required
- (UIImage *)imageWithFilterAppliedWithImage:(UIImage *)image;
@end
