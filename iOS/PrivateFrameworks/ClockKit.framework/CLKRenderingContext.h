//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLKDevice;

@interface CLKRenderingContext : NSObject
{
    CLKDevice *_device;
}

+ (id)sharedRenderingContext;
- (void).cxx_destruct;
- (void)setDevice:(id)arg1;
@property(readonly, nonatomic) CLKDevice *device;
- (id)_init;

@end

