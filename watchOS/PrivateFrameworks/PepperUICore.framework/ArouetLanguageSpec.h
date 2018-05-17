//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSLocale, NSString;

@interface ArouetLanguageSpec : NSObject
{
    NSString *_language;
    NSLocale *_locale;
    int __currentLanguage;
    NSString *__lowercaseScriptCode;
}

+ (_Bool)supportsLanguage:(id)arg1;
@property(readonly, nonatomic) NSString *_lowercaseScriptCode; // @synthesize _lowercaseScriptCode=__lowercaseScriptCode;
@property(readonly, nonatomic) int _currentLanguage; // @synthesize _currentLanguage=__currentLanguage;
@property(readonly) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
@property(readonly, nonatomic) int mecabraInputMethodType;
@property(readonly, nonatomic) _Bool useLMLexicon;
@property(readonly, nonatomic) _Bool useLMLanguageModel;
@property(readonly, nonatomic) _Bool candidateListShouldIncludeSpellCheckVariants;
@property(readonly, nonatomic) _Bool candidateListShouldIncludeCapitalizationVariants;
@property(readonly, nonatomic) _Bool supportsMecabraPredictions;
@property(readonly, nonatomic) _Bool supportsLanguageModelPredictions;
- (_Bool)shouldRemovePrecedingAutoSpaceForInsertingCharacter:(unsigned short)arg1;
@property(readonly, nonatomic) _Bool shouldAutoAppendSpaceAfterLastWordReplacement;
@property(readonly, nonatomic) float minimumFontScaleForCandidates;
@property(readonly, nonatomic) NSString *replacementStringForTypedDoubleSpace;
@property(readonly, nonatomic) int gridRenderStyle;
@property(readonly, nonatomic) NSCharacterSet *recognitionActiveCharacterSet;
@property(readonly, nonatomic) double maxStrokeCoallescingRecognitionDelay;
@property(readonly, nonatomic) double maxStrokeCoallescingInterstrokeDelay;
@property(readonly, nonatomic) double minRecognitionDuration;
@property(readonly, nonatomic) unsigned int maxRecognitionResultCount;
@property(readonly, nonatomic) int handwritingRecognitionMode;
@property(readonly, nonatomic) int handwritingRecognitionType;
- (id)description;
- (id)initWithLanguage:(id)arg1;
- (id)init;

@end
