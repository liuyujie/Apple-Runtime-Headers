//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArouetScrollWheelView, NSString;

@protocol ArouetScrollWheelViewDataSource <NSObject>
- (NSString *)scrollWheel:(ArouetScrollWheelView *)arg1 titleForItemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfRowsInScrollWheel:(ArouetScrollWheelView *)arg1;
@end

