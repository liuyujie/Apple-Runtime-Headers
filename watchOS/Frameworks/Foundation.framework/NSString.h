//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSItemProviderReading.h"
#import "NSItemProviderWriting.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface NSString : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSMutableCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithFormat:(id)arg1;
+ (id)stringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id *)arg3;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)localizedStringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id *)arg3;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned int)arg2;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)string;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)pathWithComponents:(id)arg1;
+ (id)localizedNameOfStringEncoding:(unsigned int)arg1;
+ (const unsigned int *)availableStringEncodings;
+ (unsigned int)defaultCStringEncoding;
+ (id)_newZStringWithUTF8String:(const char *)arg1;
+ (id)_newZStringWithString:(id)arg1;
+ (id)_newZStringWithCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
+ (id)_web_stringRepresentationForBytes:(long long)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (unsigned int)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id *)arg3 usedLossyConversion:(_Bool *)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (Class)classForCoder;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3 freeWhenDone:(_Bool)arg4;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned int)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned int)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 error:(id *)arg5;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned int *)arg2;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned int *)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned int)arg2 copy:(_Bool)arg3 usedEncoding:(unsigned int *)arg4;
- (id)initWithData:(id)arg1 encoding:(unsigned int)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 length:(unsigned int)arg2;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 encoding:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2 encoding:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)getExternalRepresentation:(id *)arg1 extendedAttributes:(id *)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned int)arg4 error:(id *)arg5;
- (id)displayableString;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubstringsInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;
- (void)getParagraphStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4;
- (void)getLineStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4;
- (void)_getBlockStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4 stopAtLineSeparators:(_Bool)arg5;
- (id)stringByApplyingTransform:(id)arg1 reverse:(_Bool)arg2;
- (id)stringByFoldingWithOptions:(unsigned int)arg1 locale:(id)arg2;
- (id)precomposedStringWithCompatibilityMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)precomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCanonicalMapping;
- (id)capitalizedStringWithLocale:(id)arg1;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;
- (id)capitalizedString;
- (id)lowercaseString;
- (id)uppercaseString;
- (_Bool)boolValue;
- (int)integerValue;
- (long long)longLongValue;
- (int)intValue;
- (float)floatValue;
- (double)doubleValue;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)substringToIndex:(unsigned int)arg1;
- (id)substringFromIndex:(unsigned int)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (void)getCharacters:(unsigned short *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (id)stringByPaddingToLength:(unsigned int)arg1 withString:(id)arg2 startingAtIndex:(unsigned int)arg3;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (struct _NSRange)localizedStandardRangeOfString:(id)arg1;
- (_Bool)localizedStandardContainsString:(id)arg1;
- (_Bool)localizedCaseInsensitiveContainsString:(id)arg1;
- (_Bool)containsString:(id)arg1;
- (_Bool)localizedHasSuffix:(id)arg1;
- (_Bool)localizedHasPrefix:(id)arg1;
- (_Bool)hasSuffix:(id)arg1;
- (_Bool)hasPrefix:(id)arg1;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned int)arg2;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned int)arg2;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned int)arg2;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (struct _NSRange)rangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned int)arg1;
- (int)localizedStandardCompare:(id)arg1;
- (int)localizedCaseInsensitiveCompare:(id)arg1;
- (int)localizedCompare:(id)arg1;
- (int)caseInsensitiveCompare:(id)arg1;
- (int)compare:(id)arg1;
- (int)compare:(id)arg1 options:(unsigned int)arg2;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (_Bool)isEqualToString:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)quotedStringRepresentation;
- (id)_stringRepresentation;
- (_Bool)_isCString;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const unsigned short *)_fastCharacterContents;
- (id)init;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
@property(readonly) unsigned int length;
- (_Bool)_getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned long)arg3;
- (unsigned long)_fastestEncodingInCFStringEncoding;
- (unsigned long)_smallestEncodingInCFStringEncoding;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (id)_createSubstringWithRange:(struct _NSRange)arg1;
- (unsigned long)_cfTypeID;
- (id)stringByConvertingURLToPath;
- (id)stringByConvertingPathToURL;
- (unsigned int)completePathIntoString:(id *)arg1 caseSensitive:(_Bool)arg2 matchesIntoArray:(id *)arg3 filterTypes:(id)arg4;
- (_Bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned int)arg2;
- (const char *)fileSystemRepresentation;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)stringByResolvingSymlinksInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;
- (id)stringByStandardizingPath;
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;
- (id)stringByExpandingTildeInPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingPathExtension;
- (id)pathExtension;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)lastPathComponent;
- (_Bool)isAbsolutePath;
- (id)pathComponents;
- (_Bool)isNSString__;
- (id)propertyListFromStringsFileFormat;
- (id)propertyList;
- (id)formatConfiguration;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (_Bool)getBytes:(char *)arg1 maxLength:(unsigned int)arg2 filledLength:(unsigned int *)arg3 encoding:(unsigned int)arg4 allowLossyConversion:(_Bool)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned int)arg2 usedLength:(unsigned int *)arg3 encoding:(unsigned int)arg4 options:(unsigned int)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (unsigned int)lengthOfBytesUsingEncoding:(unsigned int)arg1;
- (unsigned int)maximumLengthOfBytesUsingEncoding:(unsigned int)arg1;
- (_Bool)getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (const char *)cStringUsingEncoding:(unsigned int)arg1;
- (id)dataUsingEncoding:(unsigned int)arg1;
- (id)dataUsingEncoding:(unsigned int)arg1 allowLossyConversion:(_Bool)arg2;
- (_Bool)canBeConvertedToEncoding:(unsigned int)arg1;
- (unsigned int)smallestEncoding;
- (unsigned int)fastestEncoding;
- (const char *)lossyCString;
- (unsigned int)cStringLength;
- (const char *)cString;
- (const char *)UTF8String;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)getCString:(char *)arg1 maxLength:(unsigned int)arg2 range:(struct _NSRange)arg3 remainingRange:(struct _NSRange *)arg4;
- (unsigned int)__graphemeCount;
- (id)stringByAddingPercentEscapes;
- (id)stringByRemovingPercentEscapes;
- (id)standardizedURLPath;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned int)arg1;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned int)arg1;
@property(readonly, copy) NSString *stringByRemovingPercentEncoding;
- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (CDStruct_5fe7aead)decimalValue;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_HTTPStyleLanguageCode;
- (unsigned long)_web_extractFourCharCode;
- (id)_web_filenameByFixingIllegalCharacters;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_URLFragment;
- (_Bool)_web_isFileURL;
- (_Bool)_web_looksLikeAbsoluteURL;
- (struct _NSRange)_web_rangeOfURLHost;
- (struct _NSRange)_web_rangeOfURLUserPasswordHostPort;
- (id)_web_fixedCarbonPOSIXPath;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_stringByTrimmingWhitespace;
- (id)_web_domainFromHost;
- (_Bool)_web_domainMatches:(id)arg1;
- (_Bool)_web_hasCountryCodeTLD;
- (_Bool)_web_looksLikeIPAddress;
- (int)_web_countOfString:(id)arg1;
- (_Bool)_web_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (_Bool)_web_isJavaScriptURL;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (struct _NSRange)_web_rangeOfURLResourceSpecifier_nowarn;
- (struct _NSRange)_web_rangeOfURLScheme_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(_Bool)arg1;
- (id)_web_parseAsKeyValuePair_nowarn;
- (id)_web_splitAtNonDateCommas_nowarn;
- (_Bool)_getBytesAsData:(id *)arg1 maxLength:(unsigned int)arg2 usedLength:(unsigned int *)arg3 encoding:(unsigned int)arg4 options:(unsigned int)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (id)_getCharactersAsStringInRange:(struct _NSRange)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)variantFittingPresentationWidth:(int)arg1;
- (void)_flushRegularExpressionCaches;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (struct _NSRange)_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (struct _NSRange)significantText;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)__escapeString5991;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned int)arg3 orthography:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)linguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned int)arg3 orthography:(id)arg4 tokenRanges:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
