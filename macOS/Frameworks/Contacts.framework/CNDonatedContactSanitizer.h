//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CNDonatedContactSanitizer : NSObject
{
}

+ (id)storeInfoFromPredicate:(id)arg1;
+ (id)storeInfoByMergingStoreInfos:(id)arg1;
+ (void)markContactAndMultiValuesAsDonated:(id)arg1 usingStoreInfo:(id)arg2 andStoreIdentifier:(id)arg3;
+ (id)mutableCopyOfDonatedContact:(id)arg1 withCustomIdentifier:(id)arg2;
+ (id)sanitizeDonatedContact:(id)arg1 matchingPredicate:(id)arg2;

@end
