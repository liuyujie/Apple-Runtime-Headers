//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUExtensionVendor.h"

@class PHAdjustmentData, PUEditingInitialPayload;

@protocol PUEditingExtensionVendor <PUExtensionVendor>
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(void (^)(BOOL))arg1;
- (void)cancelContentEditingWithResponseHandler:(void (^)(void))arg1;
- (void)finishContentEditing;
- (void)startContentEditingWithPayload:(PUEditingInitialPayload *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)queryHandlingCapabilityForAdjustmentData:(PHAdjustmentData *)arg1 withResponseHandler:(void (^)(BOOL))arg2;
@end

