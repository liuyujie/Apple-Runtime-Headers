//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSUIOChannel.h"

@class NSObject<OS_dispatch_queue>;

@protocol TSUReadChannel <TSUIOChannel>
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg4;
@end
