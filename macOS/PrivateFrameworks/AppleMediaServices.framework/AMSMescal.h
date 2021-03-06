//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMSMescal : NSObject
{
}

+ (id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2;
+ (id)_DAAPActionsForURLBagActions:(id)arg1;
+ (BOOL)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id *)arg3;
+ (id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id *)arg3;
+ (BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 error:(id *)arg6;
+ (BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id *)arg5;
+ (BOOL)shouldReprimeConnectionWithResult:(id)arg1;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id *)arg5;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id *)arg4;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id *)arg5;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id *)arg4;
+ (BOOL)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id *)arg3;
+ (BOOL)primeTheConnectionWithContract:(id)arg1 error:(id *)arg2;

@end

