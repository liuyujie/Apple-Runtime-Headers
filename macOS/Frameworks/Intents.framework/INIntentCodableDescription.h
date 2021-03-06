//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableDescription.h>

#import "NSSecureCoding.h"

@class NSString;

@interface INIntentCodableDescription : INCodableDescription <NSSecureCoding>
{
    BOOL _userConfirmationRequired;
    NSString *_title;
    NSString *_titleLocID;
    NSString *_descriptiveText;
    NSString *_descriptiveTextLocID;
    NSString *_defaultImageName;
    long long _intentCategory;
    NSString *_verb;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(nonatomic) long long intentCategory; // @synthesize intentCategory=_intentCategory;
@property(copy, nonatomic) NSString *defaultImageName; // @synthesize defaultImageName=_defaultImageName;
@property(copy, nonatomic) NSString *descriptiveTextLocID; // @synthesize descriptiveTextLocID=_descriptiveTextLocID;
@property(copy, nonatomic) NSString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property(copy, nonatomic) NSString *titleLocID; // @synthesize titleLocID=_titleLocID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)attributes;
- (id)_dictionaryRepresentation;

@end

