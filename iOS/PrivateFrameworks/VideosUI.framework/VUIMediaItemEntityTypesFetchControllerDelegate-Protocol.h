//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, VUIMediaItemEntityTypesFetchController, VUIMediaItemEntityTypesFetchControllerResult;

@protocol VUIMediaItemEntityTypesFetchControllerDelegate <NSObject>
- (void)controller:(VUIMediaItemEntityTypesFetchController *)arg1 fetchDidFailWithError:(NSError *)arg2;
- (void)controller:(VUIMediaItemEntityTypesFetchController *)arg1 fetchDidCompleteWithResult:(VUIMediaItemEntityTypesFetchControllerResult *)arg2;
@end
