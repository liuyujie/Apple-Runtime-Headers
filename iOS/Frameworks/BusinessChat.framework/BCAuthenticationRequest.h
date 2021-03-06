//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BCOAuth2Parameters, NSString;

@interface BCAuthenticationRequest : NSObject <NSSecureCoding>
{
    NSString *_businessIdentifier;
    NSString *_businessName;
    BCOAuth2Parameters *_oauth2;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) BCOAuth2Parameters *oauth2; // @synthesize oauth2=_oauth2;
@property(readonly, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(retain, nonatomic) NSString *businessIdentifier; // @synthesize businessIdentifier=_businessIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end

