//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPMediaPlayerViewController;

@protocol SPMediaPlayerViewControllerDelegate <NSObject>

@optional
- (void)mediaPlayerViewControllerRequestsBacklightAssertionRelease:(SPMediaPlayerViewController *)arg1;
- (void)mediaPlayerViewControllerRequestsBacklightAssertionCreate:(SPMediaPlayerViewController *)arg1;
- (void)mediaPlayerViewController:(SPMediaPlayerViewController *)arg1 didPlayToEnd:(_Bool)arg2 endTime:(double)arg3 error:(NSError *)arg4;
@end

