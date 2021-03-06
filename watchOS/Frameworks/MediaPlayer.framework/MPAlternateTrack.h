//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMediaSelectionOption, NSString;

@interface MPAlternateTrack : NSObject
{
    NSString *_displayName;
    NSString *_canonicalLanguageIdentifier;
    AVMediaSelectionOption *_option;
    _Bool _isMainProgram;
    _Bool _isDVS;
}

+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;
@property(readonly, nonatomic) _Bool isDVS; // @synthesize isDVS=_isDVS;
@property(readonly, nonatomic) _Bool isMainProgram; // @synthesize isMainProgram=_isMainProgram;
@property(readonly, nonatomic) AVMediaSelectionOption *option; // @synthesize option=_option;
@property(readonly, nonatomic) NSString *canonicalLanguageIdentifier; // @synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)_setDisplayNameFromOption:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (int)compare:(id)arg1;
- (id)initWithOption:(id)arg1;

@end

