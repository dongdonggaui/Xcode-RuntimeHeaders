/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (IBStringAdditions)
+ (id)ib_stringWithListComponentsJoinedByCommasAndAnd:(id)arg1;
+ (id)ib_UUIDString;
- (void)ib_invokeWithAccessToFileSystemRepresentation:(id)arg1;
- (id)ib_onlyPathComponent;
- (id)ib_firstPathComponent;
- (BOOL)ib_isNonEmpty;
- (long long)ib_numberOfOccurrencesOfString:(id)arg1;
- (id)ib_stringOfUniqueCharactersFromSet:(id)arg1;
- (BOOL)ib_containsStringCaseInsensatively:(id)arg1;
- (BOOL)ib_containsString:(id)arg1;
- (BOOL)ib_containsCharactersFromSet:(id)arg1;
- (BOOL)ib_isComposedEntirelyOfCharactersFromSet:(id)arg1;
- (BOOL)ib_isRange:(struct _NSRange)arg1 composedEntirelyOfCharactersFromSet:(id)arg2;
- (id)ib_UTF8Representation;
- (id)ib_stringByPrependingString:(id)arg1;
- (id)ib_stringByAppendingPathComponents:(id)arg1;
- (id)ib_stringByRemovingCharactersFromSet:(id)arg1;
- (long long)ib_caseInsensitiveNumericCompare:(id)arg1;
- (void)ib_invokeWithAccessToUTF8Bytes:(id)arg1;
- (void)ib_invokeWithAccessToCharacters:(id)arg1;
@end

