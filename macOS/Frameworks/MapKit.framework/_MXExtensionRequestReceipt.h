//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject
{
    NSTimer *_timer;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)cancelWithTimeInterval:(double)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end
