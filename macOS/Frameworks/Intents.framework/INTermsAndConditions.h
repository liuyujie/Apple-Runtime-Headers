//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INTermsAndConditionsExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface INTermsAndConditions : NSObject <INTermsAndConditionsExport, NSSecureCoding, NSCopying>
{
    NSString *_localizedTermsAndConditionsText;
    NSURL *_privacyPolicyURL;
    NSURL *_termsAndConditionsURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSURL *termsAndConditionsURL; // @synthesize termsAndConditionsURL=_termsAndConditionsURL;
@property(readonly) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly) NSString *localizedTermsAndConditionsText; // @synthesize localizedTermsAndConditionsText=_localizedTermsAndConditionsText;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithLocalizedTermsAndConditionsText:(id)arg1 privacyPolicyURL:(id)arg2 termsAndConditionsURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
