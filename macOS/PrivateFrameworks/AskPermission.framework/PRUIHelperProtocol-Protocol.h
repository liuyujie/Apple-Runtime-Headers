//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAFamilyMember, NSArray, NSDictionary, NSNumber, NSString, PRRequest;

@protocol PRUIHelperProtocol <NSObject>
- (void)presentDialog:(NSDictionary *)arg1 dialogOption:(long long)arg2 accountDSID:(NSNumber *)arg3 completionHandler:(void (^)(void))arg4;
- (void)showStorePreviewWindowForRequest:(PRRequest *)arg1 fromFamilyMember:(FAFamilyMember *)arg2 withRequestString:(NSString *)arg3 delegate:(id <PRUIPresenterDelegate>)arg4;
- (void)promptForApprovalSignInWithRequest:(PRRequest *)arg1 localApproval:(BOOL)arg2 statusToSet:(unsigned long long)arg3 familyMembers:(NSArray *)arg4 explanation:(NSString *)arg5 delegate:(id <PRUISignInDelegate>)arg6;
@end

