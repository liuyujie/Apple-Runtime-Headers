//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ROCKForwardingInterposableWithRunLoop.h"
#import "ROCKImpersonateable.h"

@class NSArray;

@protocol UHAShareSheetControllerInterface <ROCKImpersonateable, ROCKForwardingInterposableWithRunLoop>
@property(copy, nonatomic) CDUnknownBlockType completionWithItemsHandler;
- (void)presentShareSheetWithItems:(NSArray *)arg1 atRect:(struct CGRect)arg2;
@end

