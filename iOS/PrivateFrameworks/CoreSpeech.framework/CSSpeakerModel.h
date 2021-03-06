//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CSSpeakerModel : NSObject
{
    NSString *_modelFileName;
    NSString *_languageCode;
    NSString *_modelPath;
    NSString *_utteranceDirectory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (void)discard;
@property(readonly, nonatomic) _Bool needsRetrain;
- (_Bool)_isDirectoryEmpty:(id)arg1;
@property(readonly, nonatomic) NSArray *enrollmentUtterance;
@property(readonly, nonatomic) NSString *utteranceDirectory;
- (id)modelDirectory;
@property(readonly, nonatomic) NSString *modelPath;
- (id)_satPath;
- (void)_createDirectoryIfNotExist:(id)arg1;
- (id)initWithSpeakerModelFileName:(id)arg1 languageCode:(id)arg2;

@end

