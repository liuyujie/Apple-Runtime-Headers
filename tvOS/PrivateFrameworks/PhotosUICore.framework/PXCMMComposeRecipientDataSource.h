//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

@interface PXCMMComposeRecipientDataSource : NSObject
{
    NSArray *_composeRecipients;
    NSSet *_recipients;
}

+ (id)new;
@property(copy, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) NSArray *composeRecipients; // @synthesize composeRecipients=_composeRecipients;
- (void).cxx_destruct;
- (unsigned long long)indexOfComposeRecipientForRecipient:(id)arg1;
- (id)initWithComposeRecipients:(id)arg1 recipients:(id)arg2;
- (id)init;

@end
