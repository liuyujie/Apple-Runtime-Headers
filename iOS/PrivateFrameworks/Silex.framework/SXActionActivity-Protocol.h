//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SXAction;

@protocol SXActionActivity <NSObject>
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *label;
- (void)invokeWithAction:(SXAction *)arg1 invocationMethod:(unsigned long long)arg2;
@end
