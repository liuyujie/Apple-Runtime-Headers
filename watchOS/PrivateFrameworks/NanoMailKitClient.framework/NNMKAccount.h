//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface NNMKAccount : NSObject <NSSecureCoding>
{
    _Bool _shouldArchive;
    NSString *_accountId;
    NSString *_localId;
    NSString *_parentAccountIdentifier;
    NSString *_displayName;
    unsigned int _sourceType;
    NSArray *_emailAddresses;
    NSString *_username;
    NSString *_defaultEmailAddress;
    unsigned int _standaloneState;
    NSArray *_mailboxes;
}

+ (id)generateIdentifierFromEmailsAddresses:(id)arg1;
+ (id)generateAccountIdForAccount:(id)arg1;
+ (id)inboxesFromAccounts:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(nonatomic) unsigned int standaloneState; // @synthesize standaloneState=_standaloneState;
@property(copy, nonatomic) NSString *defaultEmailAddress; // @synthesize defaultEmailAddress=_defaultEmailAddress;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *parentAccountIdentifier; // @synthesize parentAccountIdentifier=_parentAccountIdentifier;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isiCloud;
- (_Bool)maySupportStandaloneMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

