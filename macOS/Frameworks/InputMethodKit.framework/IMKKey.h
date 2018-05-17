//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface IMKKey : NSObject <NSCopying>
{
    unsigned short _code;
    NSMutableDictionary *_primaryCharactersMapping;
    NSMutableDictionary *_secondaryCharactersMapping;
}

+ (id)keyWithKeyCode:(unsigned short)arg1 primaryCharactersMapping:(id)arg2;
+ (id)keyWithKeyCode:(unsigned short)arg1 primaryCharacters:(id)arg2 at:(unsigned long long)arg3;
+ (id)keyWithKeyCode:(unsigned short)arg1;
+ (id)keyTab;
+ (id)keySpace;
+ (id)keyEnter;
+ (id)keyDelete;
@property(readonly, nonatomic) NSMutableDictionary *secondaryCharactersMapping; // @synthesize secondaryCharactersMapping=_secondaryCharactersMapping;
@property(readonly, nonatomic) NSMutableDictionary *primaryCharactersMapping; // @synthesize primaryCharactersMapping=_primaryCharactersMapping;
@property(readonly, nonatomic) unsigned short code; // @synthesize code=_code;
- (void).cxx_destruct;
- (unsigned long long)primaryComposedCharactersCountAt:(unsigned long long)arg1;
- (id)primaryCharactersAt:(unsigned long long)arg1;
- (id)keyWithForwardRotatedPrimaryAlphaComposedCharacters;
- (void)_forwardRotatePrimaryComposedCharactersAtModifiers:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isTab;
@property(readonly, nonatomic) BOOL isSpace;
@property(readonly, nonatomic) BOOL isShift;
@property(readonly, nonatomic) BOOL isEscape;
@property(readonly, nonatomic) BOOL isEnter;
@property(readonly, nonatomic) BOOL isDelete;
@property(readonly, nonatomic) BOOL isArrow;
@property(readonly, nonatomic) BOOL isCharacterKey;
@property(readonly, nonatomic) BOOL isNumericKey;
@property(readonly, nonatomic) BOOL isAlphabeticKey;
- (BOOL)containsPrimaryCharacterIn:(id)arg1 at:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long number;
@property(readonly, nonatomic) unsigned int character;
- (unsigned int)characterAt:(unsigned long long)arg1;
- (id)charactersAt:(unsigned long long)arg1;
- (id)characters:(long long)arg1 at:(unsigned long long)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyCode:(unsigned short)arg1 primaryCharactersMapping:(id)arg2;
- (id)initWithKeyCode:(unsigned short)arg1 primaryCharacters:(id)arg2 at:(unsigned long long)arg3;
- (id)init;

@end
