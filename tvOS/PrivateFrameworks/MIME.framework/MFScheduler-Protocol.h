//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MFScheduler <NSObject>
- (id <MFCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <MFCancelable>)performCancelableBlock:(void (^)(MFCancelationToken *))arg1;
- (void)performBlock:(void (^)(void))arg1;
@end

