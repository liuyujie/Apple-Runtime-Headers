//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AXMLanguage, NSArray, NSSet;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding>
{
    _Bool _detectText;
    _Bool _detectFaces;
    _Bool _detectScenes;
    _Bool _detectModelClassifications;
    _Bool _detectTraits;
    _Bool _detectRectangles;
    _Bool _detectHumans;
    _Bool _detectHorizon;
    _Bool _correctSpelling;
    _Bool _includeImageInResult;
    long long _clientID;
    AXMLanguage *_textDetectionLanguage;
    NSSet *_spellCheckingLanguages;
    NSArray *_ignoredLayerContextIDs;
}

+ (_Bool)supportsSecureCoding;
+ (id)voiceOverOptions;
+ (id)defaultOptions;
@property(retain, nonatomic) NSArray *ignoredLayerContextIDs; // @synthesize ignoredLayerContextIDs=_ignoredLayerContextIDs;
@property(nonatomic) _Bool includeImageInResult; // @synthesize includeImageInResult=_includeImageInResult;
@property(retain, nonatomic) NSSet *spellCheckingLanguages; // @synthesize spellCheckingLanguages=_spellCheckingLanguages;
@property(retain, nonatomic) AXMLanguage *textDetectionLanguage; // @synthesize textDetectionLanguage=_textDetectionLanguage;
@property(nonatomic) _Bool correctSpelling; // @synthesize correctSpelling=_correctSpelling;
@property(nonatomic) _Bool detectHorizon; // @synthesize detectHorizon=_detectHorizon;
@property(nonatomic) _Bool detectHumans; // @synthesize detectHumans=_detectHumans;
@property(nonatomic) _Bool detectRectangles; // @synthesize detectRectangles=_detectRectangles;
@property(nonatomic) _Bool detectTraits; // @synthesize detectTraits=_detectTraits;
@property(nonatomic) _Bool detectModelClassifications; // @synthesize detectModelClassifications=_detectModelClassifications;
@property(nonatomic) _Bool detectScenes; // @synthesize detectScenes=_detectScenes;
@property(nonatomic) _Bool detectFaces; // @synthesize detectFaces=_detectFaces;
@property(nonatomic) _Bool detectText; // @synthesize detectText=_detectText;
@property(nonatomic) long long clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

