//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABPerson.h"

@interface ABPerson (SocialUIAdditions)
+ (id)cardFromVCardData:(id)arg1;
+ (id)cardFromPasteboardContent:(id)arg1;
- (id)formattedPhoneNumberWithPhoneNumberLike:(id)arg1;
- (void)setBlockingIMHandlePictures:(BOOL)arg1;
- (BOOL)blockingIMHandlePictures;
- (BOOL)openInAddressBookAndEdit:(BOOL)arg1;
- (id)mergedAddressBookMatch;
- (BOOL)mergeVCardWithABPerson:(id)arg1;
@end

