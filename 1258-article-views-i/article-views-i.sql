WITH Same AS (
    SELECT author_id AS "id" FROM Views WHERE author_id = viewer_id
)

SELECT DISTINCT(id) from Same ORDER BY id;
