//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSScanner;

@interface PXMiniXMLParser : NSObject
{
    CDUnknownBlockType _parsedCharactersBlock;
    CDUnknownBlockType _parsedTagBlock;
    CDUnknownBlockType _parsedEntityBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSScanner *__scanner;
    NSCharacterSet *__syntaxMarkerCharactersSet;
}

@property(readonly, nonatomic) NSCharacterSet *_syntaxMarkerCharactersSet; // @synthesize _syntaxMarkerCharactersSet=__syntaxMarkerCharactersSet;
@property(readonly, nonatomic) NSScanner *_scanner; // @synthesize _scanner=__scanner;
@property(copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedEntityBlock; // @synthesize parsedEntityBlock=_parsedEntityBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedTagBlock; // @synthesize parsedTagBlock=_parsedTagBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
- (void).cxx_destruct;
- (BOOL)_tryScanningUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_parseEntity;
- (BOOL)_parseTag;
- (BOOL)_parseCharacters;
- (BOOL)_isAtEnd;
- (void)parse;
- (id)initWithString:(id)arg1;
- (id)init;

@end
