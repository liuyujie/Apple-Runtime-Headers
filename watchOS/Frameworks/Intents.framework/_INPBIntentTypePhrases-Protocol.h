//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBIntentType;

@protocol _INPBIntentTypePhrases <NSObject>
@property(readonly, nonatomic) unsigned int intentVocabularyExamplesCount;
@property(copy, nonatomic) NSArray *intentVocabularyExamples;
@property(readonly, nonatomic) _Bool hasIntentType;
@property(retain, nonatomic) _INPBIntentType *intentType;
- (NSString *)intentVocabularyExamplesAtIndex:(unsigned int)arg1;
- (void)addIntentVocabularyExamples:(NSString *)arg1;
- (void)clearIntentVocabularyExamples;
@end
