//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, TIKeyboardSecureCandidateRenderTraits, TIKeyboardSecureCandidateRenderer;

@protocol TIProactiveQuickTypeManaging <NSObject>
- (void)setCachedRecipientInfo:(NSDictionary *)arg1 forEmailOrPhone:(NSString *)arg2;
- (NSDictionary *)getCachedRecipientInfoForEmailOrPhone:(NSString *)arg1;
- (NSArray *)getMeCardEmailAddresses;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;
- (_Bool)isAutoCompleteEnabled;
- (_Bool)isAutoPopupEnabled;
- (_Bool)isEnabled;
- (void)reset;
- (NSMutableArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (NSMutableArray *)generateAndRenderProactiveSuggestionsWithTriggers:(NSArray *)arg1 withAdditionalPredictions:(NSArray *)arg2 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg3 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg4 withInput:(NSString *)arg5 withRecipient:(NSString *)arg6 withApplication:(NSString *)arg7 withLocale:(NSString *)arg8 withTextContentType:(NSString *)arg9 withAvailableApps:(NSSet *)arg10 logBlock:(void (^)(NSString *))arg11;
@end
